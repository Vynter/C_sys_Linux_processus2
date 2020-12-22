#! /bin/bash

echo "Mise a jour en cours"

apt-get update && apt-get upgrade 

if [ $? -eq 0 ]; then
	echo "Mise a ajour effectuer avec succée" |tee success.txt
else
	echo "La mise a jour n'a pas pu étre effectuer" |tee  error.txt
fi
