#include<iostream>
using namespace std;

int maxSubsequeueSum(int Array[],int length){
	int max =  Array[0];

	for(int i=0;i < length;i++){
		int sum = Array[i];
		for(int j=i+1;j <= length;j++){
			if(sum > max)
				max = sum;
			sum += Array[j];
					
		}
	}
	return max;
}

int maxSubsequeueSum2(int Array[],int length){
	int max =  Array[0];
	int sum = 0;
	
	for(int i=0;i < length;i++){
		sum += Array[i];
		if(sum > max)
			max = sum;
		if(sum < 0)
			sum = 0;
	}
	return max;
}

int main(){
	int A1[] = {3,4,-2,1,-5,-2,5};
	int A2[] = {-2,7,4,11,-2,-8,12,1};
	int A3[] = {-2,7,4,11,-2,-8,12,1,-3};
	int A4[] = {3,-2,7,4,11,-2,-8,12,1,-3};
	int A5[] = {-2,1,-2,3,-2,7,4,11,-2,-8,12,1,-3};
	int A6[] = {-2,1,-2,3,-2,7,4,-11,-2,-8,-13,1,-3};
	int A7[] = {-2,-1,-2,-3,-2,-7,-4,-11,-2,-8,-13,-1,-3};
	cout<<"A1最大连续子序列之和："<<maxSubsequeueSum2(A1,7)<<endl;
	cout<<"A2最大连续子序列之和："<<maxSubsequeueSum2(A2,8)<<endl;
	cout<<"A3最大连续子序列之和："<<maxSubsequeueSum2(A3,9)<<endl;
	cout<<"A4最大连续子序列之和："<<maxSubsequeueSum2(A4,10)<<endl;
	cout<<"A5最大连续子序列之和："<<maxSubsequeueSum2(A5,13)<<endl;
	cout<<"A6最大连续子序列之和："<<maxSubsequeueSum2(A6,13)<<endl;
	cout<<"A6最大连续子序列之和："<<maxSubsequeueSum2(A7,13)<<endl;
	int x;
	cin>>x;
	return 0;
}

