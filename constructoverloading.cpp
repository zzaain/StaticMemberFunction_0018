// Bagian dari file constructoroverloading.cpp
mahasiswa :: mahasiswa(){
}

mahasiswa :: mahasiswa(int iNim){
    nim = iNim; // definisi hanya NIM
}

mahasiswa :: mahasiswa(string iNama){
    nama = iNama; // definisi hanya NAMA
}

mahasiswa :: mahasiswa(int iNim, string iNama){
    nim = iNim; // definisi NIM dan NAMA
    nama = iNama;
}