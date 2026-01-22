// 函数: sub_409e20
// 地址: 0x409e20
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

void var_400
int32_t* eax
int32_t edx
sub_409c98(&var_400, edx, eax, 0x400)

if (*data_41350c == 0)
    void var_440
    LoadStringA(sub_404980(data_414660), *(data_413408 + 4), &var_440, 0x40)
    return MessageBoxA(nullptr, &var_400, &var_440, 0x2010)

sub_40271c(sub_402854(data_41342c))
CharToOemA(&var_400, &var_400)
uint32_t nNumberOfBytesToWrite = sub_40706c(&var_400)
uint32_t numberOfBytesWritten
WriteFile(GetStdHandle(STD_ERROR_HANDLE), &var_400, nNumberOfBytesToWrite, &numberOfBytesWritten, 
    nullptr)
return WriteFile(GetStdHandle(STD_ERROR_HANDLE), 0x409ee4, 2, &numberOfBytesWritten, nullptr)
