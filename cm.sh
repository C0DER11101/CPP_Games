# compile C/C++ programs

if [ -e $1 ]
then
	if [ -f $1 ]
	then
		while read p
		do
			if [ $p=="math.h" ]
			then
				g++ $1 -o $2 -lm
				break

			elif [ $p=="iostream" ]
			then
				g++ $1 -o $2
				break

			elif [ $p=="stdio.h" ]
			then
				gcc $1 -o $2
				break

			fi
		done < $1

	else
		echo "$1 is not a file!!"

	fi

else
	echo "$1 doesnot exist!!"

fi
