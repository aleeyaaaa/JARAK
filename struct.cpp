struct Node{
	int data;
	Node *next;
};
struct MyList{
	Node *head;
	void tambahBelakang(int);
	void hapusDepan();
	void hapusBelakang();
	void hapus(int);
	
	MyList(){
		head = new Node;
		head = NULL;
	}
	bool isEmpty(){
		return head ==NULL;
	}
	void tambahDepan(int databaru){
		Node *baru;
		baru = new Node;
		baru->data = databaru;
		baru->next=NULL;
		
		if(isEmpty(){
			head=baru;
		}
		else{
			baru->next = head;
			head = baru;
		}
		}
		void cetak(){
			if(isEmpty()){
				cout<<"List kosong";
				
			}
			else{
				Node *bantu;
				bantu = head;
				while(bantu != NULL){
					cout<<bantu->data<<endl;
					bantu = bantu->next;
				}
			}
		}
	}
	
};
