// 函数: sub_4546b4
// 地址: 0x4546b4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t* eax = sub_402ea8(8)
*eax = arg2
int32_t __saved_ebp
HWND eax_2 = sub_454688(&__saved_ebp)
eax[1] = eax_2
int32_t var_c

if (sub_454650(arg1, eax_2, &var_c) == 0)
    return sub_419f9c(arg1, eax)

HWND hWnd = sub_45f888(*sub_41a0f4(arg1, var_c))

if (IsChild(sub_45f888(*eax), hWnd) != 0)
    var_c += 1

return sub_41a170(arg1, var_c, eax)
