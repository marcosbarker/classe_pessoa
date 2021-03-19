const vector<pessoa*> getdependentes(){
	return dependentes;
	}	

	void add_dependentes(pessoa* p){
	dependentes.push_back(p);
	}

private:
	string nome;
	string cpf;
	string email;
	vector <pessoa*> dependentes;
	vector <pessoa*> :: interator ptr;
};
