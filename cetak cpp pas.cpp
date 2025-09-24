#include <iostream>
#include <string>

void CetakPascal() {
    std::cout << "var data:array[1..10000] of longint;" << std::endl;
    std::cout << "    n,i,j,temp:longint;" << std::endl;
    std::cout << "begin" << std::endl;
    std::cout << "  readln(n);" << std::endl;
    std::cout << "  for i:=1 to n do readln(data[i]);" << std::endl;
    std::cout << "  for i:=1 to n-1 do" << std::endl;
    std::cout << "    for j:=i+1 to n do" << std::endl;
    std::cout << "      if (data[i]>data[j]) then" << std::endl;
    std::cout << "      begin" << std::endl;
    std::cout << "        temp:=data[i];" << std::endl;
    std::cout << "        data[i]:=data[j];" << std::endl;
    std::cout << "        data[j]:=temp;" << std::endl;
    std::cout << "      end;" << std::endl;
    std::cout << "  for i:=1 to n do writeln(data[i]);" << std::endl;
    std::cout << "end." << std::endl;
}

void CetakCpp() {
    std::cout << "int data[10001];" << std::endl;
    std::cout << "int n,i,j,temp;" << std::endl;
    std::cout << "int main(){" << std::endl;
    std::cout << "  scanf(\"%d\",&n);" << std::endl;
    std::cout << "  for (i=1;i<=n;i++) scanf(\"%d\",data[i]);" << std::endl;
    std::cout << "  for (i=1;i<=n-1;i++)" << std::endl;
    std::cout << "    for (j=i+1;j<=n;j++)" << std::endl;
    std::cout << "      if (data[i]>data[j]){" << std::endl;
    std::cout << "        temp=data[i];" << std::endl;
    std::cout << "        data[i]=data[j];" << std::endl;
    std::cout << "        data[j]=temp;" << std::endl;
    std::cout << "      }" << std::endl;
    std::cout << "  for (i=1;i<=n;i++) printf(\"%d\\n\",data[i]);" << std::endl;
    std::cout << "  return 0;" << std::endl;
    std::cout << "}" << std::endl;
}

int main() {
    std::string pilihan;
    std::cin >> pilihan;
    
    if (pilihan == "PAS") {
        CetakPascal();
    } else if (pilihan == "CPP") {
        CetakCpp();
    }

    return 0;
}
