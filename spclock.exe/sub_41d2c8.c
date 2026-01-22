// 函数: sub_41d2c8
// 地址: 0x41d2c8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

PSTR var_8 = arg1
HRSRC eax_2 = FindResourceA(arg2, arg1, arg4)
*(arg3 + 0x10) = eax_2
int32_t __saved_ebp

if (eax_2 == 0)
    sub_41d228(&__saved_ebp)

HGLOBAL eax_4 = LoadResource(arg2, *(arg3 + 0x10))
*(arg3 + 0x14) = eax_4

if (eax_4 == 0)
    sub_41d228(&__saved_ebp)

uint32_t eax_6 = SizeofResource(arg2, *(arg3 + 0x10))
sub_41cf78(arg3, LockResource(*(arg3 + 0x14)), eax_6)
return arg3
