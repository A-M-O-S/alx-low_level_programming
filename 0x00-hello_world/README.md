
gcc -E $CFILE > c is used to run a file through a preprocessor and saves the file in another file $CFILE
gcc -c $CFILE > $(echo $CFILE|cut -d"." -f1).o is used to c but not link
gcc $CFILE -S > $(echo $CFILE|cut -d"." -f1).s is used to assemble code of c and and save it in an output file
gcc $CFILE -o cisfun is used to compile a c file and create an executable name cisfun
