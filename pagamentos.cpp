
	cin>>numero;
	
	while(verificaNumero(numero, cartao)==0){
		cout<<"Número do cartão incorreto. Digite novamente: ";     //TESTCASE
		cin>>numero;
	}
	
	
	//Coleta mês de validade
	cout<<"Digite o mês de validade: ";
	int mes;
	cin>>mes;
	
	while (verificaMes(mes, cartao)==0){
		cout<<"Mês inválido! Digite novamente: ";
		cin>>mes;
	}
	
	
	//Coleta ano de validade

	cout<<"Digite o ano validade (2 últimos dígitos): ";          

	

