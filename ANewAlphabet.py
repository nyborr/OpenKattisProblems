x = input()
output = []

for i in range(len(x)):
    if x[i] == 'a' or x[i] == 'A':
       output.append("@")
    elif x[i] == 'b' or x[i] == 'B':
       output.append("8")
    elif x[i] == 'c' or x[i] == 'C':
        output.append("(")
    elif x[i] == 'd' or x[i] == 'D':
        output.append("|)")
    elif x[i] == 'e' or x[i] == 'E':
        output.append("3")
    elif x[i] == 'f' or x[i] == 'F':
        output.append("#")
    elif x[i] == 'g' or x[i] == 'G':
        output.append("6")
    elif x[i] == 'h' or x[i] == 'H':
        output.append("[-]")
    elif x[i] == 'i' or x[i] == 'I':
        output.append("|")
    elif x[i] == 'j' or x[i] == 'J':
        output.append("_|")
    elif x[i] == 'k' or x[i] == 'K':
        output.append("|<")
    elif x[i] == 'l' or x[i] == 'L':
        output.append("1")
    elif x[i] == 'm' or x[i] == 'M':
        output.append("[]\/[]")
    elif x[i] == 'n' or x[i] == 'N':
        output.append("[]\[]")
    elif x[i] == 'o' or x[i] == 'O':
        output.append("0")
    elif x[i] == 'p' or x[i] == 'P':
        output.append("|D")
    elif x[i] == 'q' or x[i] == 'Q':
        output.append("(,)")
    elif x[i] == 'r' or x[i] == 'R':
        output.append("|Z")
    elif x[i] == 's' or x[i] == 'S':
        output.append("$")
    elif x[i] == 't' or x[i] == 'T':
        output.append("']['")
    elif x[i] == 'u' or x[i] == 'U':
        output.append("|_|")
    elif x[i] == 'v' or x[i] == 'V':
        output.append("\/")
    elif x[i] == 'w' or x[i] == 'W':
        output.append("\/\/")
    elif x[i] == 'x' or x[i] == 'X':
        output.append("}{")
    elif x[i] == 'y' or x[i] == 'Y':
        output.append("`/")
    elif x[i] == 'z' or x[i] == 'Z':
        output.append("2")
    else:
        output.append(x[i])
        
print("".join(output))
