# Teste01.01
Realizando a primeira alteração
testando alterar pelo github e puxar para pc

Objetivo: Fazer atividades e subir 


# Fluxo de trabalho Git local
git checkout -b
cria ou atualiza arquivos
git status
git add arquivos
git status
git commit -m "minha mensagem"
git checkout main
git merge nova_branch

# Fluxo de trabalho GitHub <> Local (projeto próprio ou da sua empresa)
git clone
git checkout -b <nova_branch>
alterações de arquivos
git status
git add arquivos
git status
git commit -m "nova mensagem"
git push origin <nova_branch>
abrir Pull request no GitHub para main
excluir <nova_branch> origin
git checkout main
git branch -D <nova_branch>

# Fluxo de trabalho GitHub <> Local (projetos open-source)
Fork do projeto para seu próprio github
git clone
git checkout -b <nova_branch>
alterações de arquivos
git status
git add arquivos
git status
git commit -m "nova mensagem"
git push origin <nova_branch>
abrir Pull request no GitHub da branch fork para a main do projeto original
excluir <nova_branch> origin
git checkout main
git branch -D <nova_branch>

1 — type ou categoria do branch. Os types podem ser os seguintes:

docs: apenas mudanças de documentação;
feat: uma nova funcionalidade;
fix: a correção de um bug;
perf: mudança de código focada em melhorar performance;
refactor: mudança de código que não adiciona uma funcionalidade e também não corrigi um bug;
style: mudanças no código que não afetam seu significado (espaço em branco, formatação, ponto e vírgula, etc);
test: adicionar ou corrigir testes.
