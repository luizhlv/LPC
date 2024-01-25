//TRABALHO DE LABORATÓRIO DE PROGRAMAÇÃO DE COMPUTADORES I//
//ALUNO: Luiz Henrique Lara de Vasconcelos - Eng. de Materiais//
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    unsigned int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, aa, ab, ac, ad, ae, af, ag,  time1, time2, time3, time4, time5, time6, time7, time8, time9, time10, time11, time12, time13, time14, time15, timea, timeb, timec, timed, timee, timef, timeg, timeh, timei, timej, timek, timel, timem, timen, timeo, timep;
    
    printf("Digite o resultado do jogo 1(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&a, &b);
    printf("Digite o resultado do jogo 2(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&c, &d);
    printf("Digite o resultado do jogo 3(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&e, &f);
    printf("Digite o resultado do jogo 4(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&g, &h);
    printf("Digite o resultado do jogo 5(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&i, &j);
    printf("Digite o resultado do jogo 6(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&k, &l);
    printf("Digite o resultado do jogo 7(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&m, &n);
    printf("Digite o resultado do jogo 8(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&o, &p); //entrada dos resultados das Oitavas de final//
    
    if(a>b)
    time1=timea;
    else if(b>a)
    time1=timeb;
    else{
    printf("Empate, digite o resultado do desempate do jogo 1(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&a, &b);
    if(a>b)
    time1=timea;
    else if(b>a)
    time1=timeb; 
    else{
    printf("Resultado inválido.");
    return 0;}}
    if(c>d)
    time2=timec;
    else if(d>c)
    time2=timed;
    else{
    printf("Empate, digite o resultado do desempate do jogo 2(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&c, &d);
    if(c>d)
    time2=timec;
    else if(d>c)
    time2=timed;
    else{
    printf("Resultado inválido.");
    return 0;}}
    if(e>f)
    time3=timee;
    else if(f>e)
    time3=timef;
    else{
    printf("Empate, digite o resultado do desempate do jogo 3(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&e, &f);
    if(e>f)
    time3=timee;
    else if(f>e)
    time3=timef;
    else{
    printf("Resultado inválido.");
    return 0;}}
    if(g>h)
    time4=timeg;
    else if(h>g)
    time4=timeh;
    else{
    printf("Empate, digite o resultado do desempate do jogo 4(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&g, &h);
    if(g>h)
    time4=timeg;
    else if(h>g)
    time4=timeh;
    else{
    printf("Resultado inválido.");
    return 0;}}
    if(i>j)
    time5=timei;
    else if(j>i)
    time5=timej;
    else{
    printf("Empate, digite o resultado do desempate do jogo 5(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&i, &j);
    if(i>j)
    time5=timei;
    else if(j>i)
    time5=timej;
    else{
    printf("Resultado inválido.");
    return 0;}}
    if(k>l)
    time6=timek;
    else if(l>k)
    time6=timel;
    else{
    printf("Empate, digite o resultado do desempate do jogo 6(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&k, &l);
    if(k>l)
    time6=timek;
    else if(l>k)
    time6=timel;
    else{
    printf("Resultado inválido.");
    return 0;}}
    if(m>n)
    time7=timem;
    else if(n>m)
    time7=timen;
    else{
    printf("Empate, digite o resultado do desempate do jogo 7(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&m, &n);
    if(m>n)
    time7=timem;
    else if(n>m)
    time7=timen;
    else{
    printf("Resultado inválido.");
    return 0;}}
    if(o>p)
    time8=timeo;
    else if(p>o)
    time8=timep;
    else{
    printf("Empate, digite o resultado do desempate do jogo 8(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&o, &p);
    if(o>p)
    time8=timeo;
    else if(p>o)
    time8=timep;
    else{
    printf("Resultado inválido.");
    return 0;}} //análise dos resultados das Oitavas de final, onde o time com maior número de pontos é declarado vencedor e em caso de empate pede-se o resultado do desempate, que não pode ser novamente um empate, pois é inválido//
    
    printf("Digite o resultado do jogo 9(Formato:PontosTime1 PontosTime2):\n");
    scanf("%d %d",&q, &r);
    printf("Digite o resultado do jogo 10(Formato:PontosTime1 PontosTime2):\n");
    scanf("%d %d",&s, &t);
    printf("Digite o resultado do jogo 11(Formato:PontosTime1 PontosTime2):\n");
    scanf("%d %d",&u, &v);
    printf("Digite o resultado do jogo 12(Formato:PontosTime1 PontosTime2):\n");
    scanf("%d %d",&w, &x); //entrada dos resultados das Quartas de final//
    
    if(q>r)
    time9=time1;
    else if(r>q)
    time9=time2;
    else{
    printf("Empate, digite o resultado do desempate do jogo 9(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&q, &r);
    if(q>r)
    time9=time1;
    else if(r>q)
    time9=time2;
    else{
    printf("Resultado inválido.");
    return 0;}}
    if(s>t)
    time10=time3;
    else if(t>s)
    time10=time4;
    else{
    printf("Empate, digite o resultado do desempate do jogo 10(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&s, &t);
    if(s>t)
    time10=time3;
    else if(r>q)
    time10=time4;
    else{
    printf("Resultado inválido.");
    return 0;}}
    if(u>v)
    time11=time5;
    else if(v>u)
    time11=time6;
    else{
    printf("Empate, digite o resultado do desempate do jogo 11(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&u, &v);
    if(u>v)
    time11=time5;
    else if(v>u)
    time11=time6;
    else{
    printf("Resultado inválido.");
    return 0;}}
    if(w>x)
    time12=time7;
    else if(x>w)
    time12=time8;
    else{
    printf("Empate, digite o resultado do desempate do jogo 12(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&w, &x);
    if(w>x)
    time12=time7;
    else if(x>w)
    time12=time8;
    else{
    printf("Resultado inválido.");
    return 0;}} //análise dos resultados das Quartas de final, onde o time com maior número de pontos é declarado vencedor e em caso de empate pede-se o resultado do desempate, que não pode ser novamente um empate, pois é inválido//
    
    printf("Digite o resultado do jogo 13(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&aa, &ab);
    printf("Digite o resultado do jogo 14(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&ac, &ad); //entrada dos resultados das Semi-finais//
    
    if(aa>ab)
    time13=time9;
    else if(ab>aa)
    time13=time10;
    else{
    printf("Empate, digite o resultado do desempate do jogo 13(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&aa, &ab);
    if(aa>ab)
    time13=time9;
    else if(ab>aa)
    time13=time10;
    else{
    printf("Resultado inválido.");
    return 0;}}
    if(ac>ad)
    time14=time11;
    else if(ad>ac)
    time14=time12;
    else{
    printf("Empate, digite o resultado do desempate do jogo 14(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&ac, &ad);
    if(ac>ad)
    time14=time11;
    else if(ad>ac)
    time14=time12;
    else{
    printf("Resultado inválido.");
    return 0;}} //análise dos resultados das Semi-finais, onde o time com maior número de pontos é declarado vencedor e em caso de empate pede-se o resultado do desempate, que não pode ser novamente um empate, pois é inválido//
    
    printf("Digite o resultado do jogo 15(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&ae, &af); //entrada do resultado da Final//
    
    if(ae>af)
    time15=time13;
    else if(af>ae)
    time15=time14;
    else{
    printf("Empate, digite o resultado do desempate do jogo 15(Formato:PontosTime1 PontosTime2):\n");
    scanf("%u %u",&ae, &af);
    if(ae>af)
    time15=time13;
    else if(af>ae)
    time15=time14;
    else{
    printf("Resultado inválido.");
    return 0;}} //análise do resultado da Final, onde o time com maior número de pontos é declarado vencedor e em caso de empate pede-se o resultado do desempate, que não pode ser novamente um empate, pois é inválido//
    
    if(time15==timea)
    printf("Equipe A Campeã");
    else if(time15==timeb)
    printf("Equipe B Campeã");
    else if(time15==timec)
    printf("Equipe C Campeã");
    else if(time15==timed)
    printf("Equipe D Campeã");
    else if(time15==timee)
    printf("Equipe E Campeã");
    else if(time15==timef)
    printf("Equipe F Campeã");
    else if(time15==timeg)
    printf("Equipe G Campeã");
    else if(time15==timeh)
    printf("Equipe H Campeã");
    else if(time15==timei)
    printf("Equipe I Campeã");
    else if(time15==timej)
    printf("Equipe J Campeã");    
    else if(time15==timek)
    printf("Equipe K Campeã");
    else if(time15==timel)
    printf("Equipe L Campeã");
    else if(time15==timem)
    printf("Equipe M Campeã");
    else if(time15==timen)
    printf("Equipe N Campeã");
    else if(time15==timeo)
    printf("Equipe O Campeã");
    else
    printf("Equipe P Campeã"); //Saída mostrando a equipe campeã//
    
return 0;
}
