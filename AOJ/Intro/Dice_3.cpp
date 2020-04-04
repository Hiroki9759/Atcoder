#include <stdio.h>

class Dice3{
public:
	Dice3(){
		number = new int[6];
		checkTable = new int[101];
		for(int i = 0; i < 101; i++) checkTable[i] = -1;
	};
	~Dice3(){
		delete[] number;
		delete[] checkTable;
	};

	void setLabel(int index,int num){
		number[index] = num;
		checkTable[num] = index;
	};

	void roll(char dst){
		switch(dst){
		case 'E':
			setNumber(number[3],number[1],number[0],number[5],number[4],number[2]);
			break;
		case 'N':
			setNumber(number[1],number[5],number[2],number[3],number[0],number[4]);
			break;
		case 'S':
			setNumber(number[4],number[0],number[2],number[3],number[5],number[1]);
			break;
		case 'W':
			setNumber(number[2],number[1],number[5],number[0],number[4],number[3]);
			break;
		}
	};

	bool isValidMember(int inputed[]){
		for(int i = 0; i < 6; i++)
		{
			if(checkTable[inputed[i]] == -1)
				return false;
		}
		return true;
	}
	bool isSameDice(int inputed[]){
		char order[25] = "NNNNWNNNWNNNENNNENNNWNNN";
		for(int i = 0; i < 24; i++){
			roll(order[i]);
			for(int j = 0; j < 6; j++){
				if(inputed[j] != number[j])
					break;
				if(j == 5)
					return true;
			}
		}
		return false;
	}

private:
	void setNumber(int n0,int n1,int n2,int n3,int n4,int n5){
		number[0] = n0;
		number[1] = n1;
		number[2] = n2;
		number[3] = n3;
		number[4] = n4;
		number[5] = n5;
	}

private:
	int* number;
	int* checkTable;
};

int main(){
	Dice3 dice3;
	int tmp,inputed[6];
	for(int i = 0; i < 6; i++){
		scanf("%d",&tmp);
		dice3.setLabel(i,tmp);
	}
	for(int i = 0; i < 6; i++) scanf("%d",&inputed[i]);

	if(dice3.isValidMember(inputed) && dice3.isSameDice(inputed))
		printf("Yes\n");
	else{
		printf("No\n");
	}
}
