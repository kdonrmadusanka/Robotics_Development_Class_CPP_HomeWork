mkdir -p install/lib
mkdir -p install/include/ipb_arithmetic
mkdir -p install/bin

cp results/lib/libipb_arithmetic.a install/lib
cp results/include/ipb_arithmetic/*.hpp install/include/ipb_arithmetic/
cp results/include/*.hpp install/include/
cp results/bin/main install/bin

echo "Installation Complete..."

