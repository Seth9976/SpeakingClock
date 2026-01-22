// 函数: sub_45db28
// 地址: 0x45db28
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

void* eax = sub_4659bc()
BOOL result

if (sub_465ac4(eax) == 0 || arg1[0xc] == 0 || (*(arg1 + 0x52) & 4) == 0)
    if (arg1[0x90].b != 0)
        result = *(arg2 + 4)
    
    if (arg1[0x90].b == 0 || result == *(arg2 + 8))
        (*(*arg1 + 0x44))(sub_42bc04(arg1[0x69]))
        RECT lprc
        result = FillRect(*(arg2 + 4), &lprc)
else if (*(arg1[0xc] + 0x240) == 0)
    int32_t eax_6 = sub_45f888(arg1)
    result = sub_465c5c(*(arg2 + 4), eax_6, eax, 0, 0, nullptr)
else
    result = sub_454528(arg1, *(arg2 + 4))

*(arg2 + 0xc) = 1
return result
