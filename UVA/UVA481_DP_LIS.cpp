#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int getLIS(const vector<int> &sequence, vector<int> &position){
  if(sequence.size() == 0) return 0;

  vector<int> subsequence;
  for(int i = 0 ; i < sequence.size() ; ++i ){
    //cout<<"i="<<i<<"\t"<<sequence[i]<<"\t";
    vector<int>::iterator lowerBound = lower_bound(subsequence.begin(), subsequence.end(), sequence[i]);//��sequence[i]��lowerbound
    //lowerBound���쪺�O�@��index�AlowerBound�e���������@�w��ӼƨӪ��p
    if(lowerBound == subsequence.end()){//�p�G�S��lowerbound �]�N�O����������������p
      //cout<<"not found"<<endl;
      position[i] = subsequence.size();
      subsequence.push_back(sequence[i]);//��o�ӼƷs�W
    }
    else{//�Y��lowerBound�A���ߪ�����b�ܤ�sub[lowerBound]�n��seq[lowerBound]�j
      position[i] = lowerBound - subsequence.begin();//�]��lowerBound�e���������@�w�p��
      *lowerBound = sequence[i];//*lowerBound �N�Osubsequnce[lowerBound]�����A��Ӽƴ���seq[i] ��p��
    }
  }

  return subsequence.size();
}


int main(){
  vector<int> sequence;
  int n;
  while(scanf("%d", &n) != EOF){
    sequence.push_back(n);
  }

  vector<int> position(sequence.size(), 0);
  int length = getLIS(sequence, position);
  printf("%d\n", length);
  printf("-\n");
  //for(int i=0;i<position.size();i++) //cout<<position[i]<<endl;
  stack<int> increasingSubsequence;
  int currentPosition = length - 1;
  for(int i = sequence.size() - 1 ; i >= 0 ; --i){
    if(currentPosition == position[i]){
      increasingSubsequence.push(sequence[i]);
      --currentPosition;
    }
  }

  while(!increasingSubsequence.empty()){
    printf("%d\n", increasingSubsequence.top());
    increasingSubsequence.pop();
  }

  return 0;
}
