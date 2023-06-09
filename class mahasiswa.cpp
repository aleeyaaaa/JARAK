#include<iostream>
#include<string>

using namespace std;

class Mahasiswa{
public:
	string nama;
	double ipk;
	
	string getNama(){
		return nama;
}
	double getIpk(){
		return ipk;
	}
	void setNama(string&nama){
		this ->nama=nama;
	}
	void setIpk(double ipk){
		this ->ipk=ipk;
	}
};
class Node{
	public:
		Mahasiswa mhs;
		Node*next;
};
