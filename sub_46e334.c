// 函数: sub_46e334
// 地址: 0x46e334
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (sub_46b8c0(sub_45f888(arg1)) == 0)
    return sub_45f9f0(arg1, arg2)

SetRect(arg2, 0, 0, 0, 0)
int32_t dwExStyle = GetWindowLongA(sub_45f888(arg1), 0xffffffec)
int32_t eax_5
eax_5.b = arg1[0xa4] != 0
char temp0 = eax_5.b
eax_5.b = neg.b(eax_5.b)
AdjustWindowRectEx(arg2, GetWindowLongA(sub_45f888(arg1), 0xfffffff0), 
    sbb.d(eax_5, eax_5, temp0 != 0), dwExStyle)
return SetRect(arg2, 0, 0, arg1[0x12] - arg2->right + arg2->left, 
    arg1[0x13] - arg2->bottom + arg2->top)
