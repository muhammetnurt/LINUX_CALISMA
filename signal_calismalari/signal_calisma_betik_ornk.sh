#!/bin/sh
#trap yakala INT TERM
trap ** INT
yakala()
{
	echo ctrl+C tuşuna basıldı.
	#trap - INT TERM
}
for i in {1..100};
	do
	
	echo $i
	sleep 10
	done
#betik hatalı
