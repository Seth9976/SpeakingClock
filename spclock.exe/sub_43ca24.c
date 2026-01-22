// 函数: sub_43ca24
// 地址: 0x43ca24
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*(arg1 + 0x2a5) = 0
int32_t esi
esi.w = 0xffae
sub_403e64(arg1, esi)
(*(*arg1 + 0x100))()
void* ebp

if (*(arg1 + 0x2a5) == 0)
    return sub_43cb0a(ebp) __tailcall

PostMessageA(sub_45f888(arg1), 0x1f, 0, 0)

if (*(arg1 + 0x2a6) != 0)
    return sub_43cb0a(ebp) __tailcall

PostMessageA(sub_45f888(arg1), 0x14f, 0, 0)
return sub_43cb0a(ebp) __tailcall
