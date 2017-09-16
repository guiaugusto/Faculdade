vector<int> aluno, prof;

int i = 0, j = 0, mini = abs(aluno[0] - prof[0])

while(i < aluno.size() && j < prof.size()){
	mini = min(mini, abs(aluno[i] - prof[j]));
	if(aluno[i] < prof[j])
		i++;
	else
		j++:
}

cout << mini << endl;
