#! /bin/bash

build_prg(){
	if ( make -C ./c_files/ )
	then 
		echo "	build successfull"
	else
		echo "	buiild unsuccessfull"
	fi
	
}

clean(){

	if ( make clean -C ./c_files/ )
	then 
		echo "	clean successfull"
	else
		echo "	clean unsuccessfull"
	fi

}

while true
do

	echo "Enter your choice"
	echo "1.Build"
	echo "2.Clean"
	echo "3.run"
	echo "4.exit"
	read choice

	if [[ "$choice" -eq "1" ]]
	then
		echo "	build started"
		build_prg

	elif [[ "$choice" -eq "2" ]]
	then
		echo "clean"
		clean

	elif [[ "$choice" -eq "3" ]]
	then
		echo "Running "
		#xterm  -fn "xft:DejaVu Sans Mono:pixelsize=30" -hold -e ./run
		./run
		echo " "

	elif [[ "$choice" -eq "4" ]]
        then
		exit
	else
		echo "Wrong choice"
	fi

done





