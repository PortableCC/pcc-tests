#!/bin/sh

#
# Compile pcc multiple times with itself.
#


args=`getopt r:d:kv $*`
if [ $? -ne 0 ]
then
	echo "Usage: $0 [-r revision] [-d protodir]";
	exit 2
fi
set -- $args
while [ $# -ge 0 ]
do
	case "$1"
	in
		-r)
			rarg="$2"; shift; shift;;
		-d)
			darg="$2"; shift; shift;;
		-k)
			karg="-k"; shift;;
		-v)
			varg="--with-libvmf=/usr/local/lib"; shift;;
		--)
			shift; break;;
	esac
done

if [ ! -z "$rarg" ]; then
	rarg = "-r$rarg";
fi

echo deleting...
/bin/rm -rf stage[1-3] s[2-3]bin

if [ -z "$darg" ]; then
	# no directory, check out stuff
	/bin/rm -rf xxxx
	darg=xxxx;
#	cvs -d :pserver:anonymous@pcc.ludd.ltu.se:/cvsroot co $rarg pcc
	ftp https://github.com/PortableCC/pcc/archive/refs/heads/master.zip
#	ftp https://github.com/ragge0/pcc/archive/refs/heads/master.zip
	unzip master.zip
	mv pcc-master $darg
fi

XDIR=`pwd`
export XDIR
# stage 1
echo Doing stage1...
cp -rp $darg stage1
(
	cd stage1;
	./configure --prefix=$XDIR/s1bin $varg
	make
	make install
	cd $XDIR/s1bin
	rm -rf lib
	ln -s /usr/local/lib
)

# stage 2
echo Doing stage2...
cp -rp $darg stage2
(
	cd stage2
	CC="$XDIR/s1bin/bin/pcc $karg"
	export CC
	./configure --prefix=$XDIR/s2bin $varg
	make
	make install
	cd $XDIR/s2bin
	rm -rf lib
	ln -s /usr/local/lib
)

# stage 3
cp -rp $darg stage3
echo Doing stage3...
(
	cd stage3
	CC="$XDIR/s2bin/bin/pcc $karg"
	export CC
	./configure --prefix=$XDIR/s3bin $varg
	make
	make install
	cd $XDIR/s3bin
	rm -rf lib
	ln -s /usr/local/lib
)

cmp s3bin/libexec/cpp  s2bin/libexec/cpp
cmp s3bin/libexec/ccom  s2bin/libexec/ccom
size s3bin/libexec/cpp s3bin/libexec/ccom
exit 0
