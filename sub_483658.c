// 函数: sub_483658
// 地址: 0x483658
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (sub_465ac4(sub_4659bc()) == 0)
    return sub_45db28(arg1, arg2)

(*(*arg1 + 0x44))()
int32_t esi
esi.w = 0xffb3
RECT lprc

if (sub_403e64(arg1, esi) != 0)
    sub_458ac8(arg1, 0)
    InflateRect(&lprc, 0xffffffff, 0xffffffff)

int32_t eax_7 = sub_45f888(arg1)
void* eax_8 = sub_4659bc()
BOOL result = sub_465c5c(*(arg2 + 4), eax_7, eax_8, &lprc, 0, nullptr)
*(arg2 + 0xc) = 1
return result
