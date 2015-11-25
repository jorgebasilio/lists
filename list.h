struct List{
	int value;
	List *next;
};
void insertForHead(List **l, int value){
	List *aux = new List;
	aux->value = value;
	aux->next = (*l);
	*l = aux;
}
void insertForBack(List **l, int value){
	List *box;
	box = new List;
	if(*l){
		List *aux = (*l);
		while(aux->next) 
			(aux) = (aux->next);
		box->value = value;
		box->next = NULL;
		aux->next = box;
	}
	else{
		box->value = value;
		box->next = (*l);
		*l = box;
	}
}
void deleteElement(List **l, int value){
	List *back, *box;
	box = (*l);
	back = NULL;
	while(box->next && box->value != value){
		back = box;
		box = box->next;
	}
	if(box->value == value){
		if(!back){
			*l = box->next;
		}
		else{
			back->next = box->next;
		}
		delete box;
	}
}
void deleteManyElements(List **l, int value){
	List *aux = (*l);
	List *back = NULL;
	while(aux){
		if(aux->value != value){
			back = aux;
			aux = aux->next;
		}
		else{
			if(!back){
				*l = aux->next;
				delete aux;
				aux = (*l);
			}
			else{
				back->next = aux->next;
				delete aux;
				aux = back->next;
			}
		}

	}
}
bool findValue(List *l, int value){
	bool flag = false;
	while(l){
		if(l->value == value){
			flag = true;
			break;
		}
		l = l->next;
	}
	return flag;
}
int firtsValue(List *l){
	if(l)
		return l->value;
	else
		return 0;
}
int lastValue(List *l){
	if(l){
		while(l->next)
		l = l->next;
		return l->value;
	}
	else
		return 0;
}
bool empty(List *l){
	return(!l);
}

void viewList(List *l){
	if(!l) printf("The list is empty");
	while(l){
		printf("[%i]->",l->value);
		if(!(l->next)) printf("NULL");
		l = l->next;
	};
}