// 函数: sub_4500a4
// 地址: 0x4500a4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t result = 0
int64_t var_204[0x40]
__builtin_memset(&var_204, 0, 1)

if (arg1[0xe] != 0)
    int32_t __saved_ebp
    HMENU eax_2
    void* edx_2
    eax_2, edx_2 = (*(*arg1 + 0x34))(&__saved_ebp)
    sub_44fff8(eax_2, edx_2)

uint32_t eax_7

if (arg1[0xf] != 0)
    eax_7 = sub_409d54(sub_405018(arg1[0xf]), &var_204)

if (arg1[0xf] == 0 || eax_7 != 0)
    result.b = 1
    sub_404df8(&arg1[0xf], &var_204, 0x200)

return result
