// 函数: sub_40cde8
// 地址: 0x40cde8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void var_400
int32_t* eax
int32_t edx
sub_40cc60(&var_400, edx, eax, 0x400)

if (*data_4ac370 == 0)
    void var_440
    LoadStringA(sub_405f54(data_4af7f4), *(data_4ac088 + 4), &var_440, 0x40)
    return MessageBoxA(nullptr, &var_400, &var_440, 0x2010)

sub_403004(sub_403404(data_4ac0fc))
CharToOemA(&var_400, &var_400)
uint32_t nNumberOfBytesToWrite = sub_409c4c(&var_400)
uint32_t numberOfBytesWritten
WriteFile(GetStdHandle(STD_ERROR_HANDLE), &var_400, nNumberOfBytesToWrite, &numberOfBytesWritten, 
    nullptr)
return WriteFile(GetStdHandle(STD_ERROR_HANDLE), 0x40ceac, 2, &numberOfBytesWritten, nullptr)
