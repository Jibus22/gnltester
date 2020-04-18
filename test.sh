COMP='gcc -Wall -Wextra -Werror'
COMMANDLINE='get_next_line_utils.c get_next_line.c maingnl.c -o res.out'

${COMP} ${COMMANDLINE} -D BUFFER_SIZE=0 && ./res.out;
echo "test suivant, tapez une touche";
read var1;
${COMP} ${COMMANDLINE} -D BUFFER_SIZE=1 && ./res.out;
echo "test suivant, tapez une touche";
read var1;
${COMP} ${COMMANDLINE} -D BUFFER_SIZE=3 && ./res.out;
echo "test suivant, tapez une touche";
read var1;
${COMP} ${COMMANDLINE} -D BUFFER_SIZE=8 && ./res.out;
echo "test suivant, tapez une touche";
read var1;
${COMP} ${COMMANDLINE} -D BUFFER_SIZE=18 && ./res.out;
echo "test suivant, tapez une touche";
read var1;
${COMP} ${COMMANDLINE} -D BUFFER_SIZE=30 && ./res.out;
echo "test suivant, tapez une touche";
read var1;
${COMP} ${COMMANDLINE} -D BUFFER_SIZE=300 && ./res.out;
echo "test suivant, tapez une touche";
read var1;
${COMP} ${COMMANDLINE} -D BUFFER_SIZE=303904 && ./res.out;
rm -rf res.out;
