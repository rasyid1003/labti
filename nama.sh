echo "Menu"
echo "1.Bilangan Ganjil"
echo "2. Bilangan Genap"
echo -n "Pilihan Menu : "
read menu
echo -n "Masukkan Angka : "
read angka
if [ $menu -eq 1 ]
then
x=1
until [ $x -gt $angka ]
do 
echo -n $x
((x+=2))
done
echo " "
elif [ $menu -eq 2 ]
then
x=0
until [ $x -gt $angka ]
do
echo -n $x
((x+=2))
done
echo " "
else
echo "Anda salah input"
fi
