// 函数: sub_48781f
// 地址: 0x48781f
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

arg1.b += arg2:1.b
*arg5 - *arg6
char* edi = arg6 + 4
arg1:1.b += arg2:1.b
bool p = unimplemented  {add ah, dh}
void* esp
bool c
void* const* var_4

if (p)
    char temp3_1 = *edi
    *edi += arg1.b
    c = temp3_1 + arg1.b u< temp3_1
    esp = &var_4:3
else
    char temp4_1 = *arg1
    *arg1 += arg2.b
    c = temp4_1 + arg2.b u< temp4_1
    
    if (temp4_1 + arg2.b s< 0 == add_overflow(temp4_1, arg2.b))
        int16_t entry_ebx
        arg1[0x7b] += entry_ebx.b
        *(arg1 - 1)
        *(arg1 - 1) += (arg3 + 1):1.b
        bool p_1 = unimplemented  {add byte [eax], ch}
        
        if (not(p_1))
            void* eax
            eax.b = (arg1 - 1).b u>> 0x43
            char temp1 = mods.dp.b(eax.w, entry_ebx:1.b)
            eax.b = divs.dp.b(eax.w, entry_ebx:1.b)
            eax:1.b = temp1
            *(arg4 - 0x3f6af040) += 1
            return eax
        
        arg1[0x7a] += arg2.b
        char temp7 = arg1[0xd0004879]
        arg1[0xd0004879] += arg2.b
        
        if (temp7 s< neg.b(arg2.b))
            return sub_487888(arg1 - 2) __tailcall
        
        *((edi << 1) + 0x7e280048) += (arg3 + 1):1.b
        char temp8 = arg1[0x800487b]
        arg1[0x800487b] += (arg1 - 3).b
        var_4 = &__return_addr
        char* var_8_1 = edi
        int32_t var_8
        
        if (&var_8:3 == 0xffffffff || temp8 + (arg1 - 3).b u< temp8)
            undefined
        
        jump(0x487855)
*(esp - 3) = edi
*(esp - 3)
*(esp + 1)
*(esp + 5)
*(esp + 0xd)
*(esp + 0x11)
*(esp + 0x15)
char* eax_4 = *(esp + 0x19)

if (esp == 0xffffffff || c)
    return eax_4

*eax_4 += eax_4.b
return sub_48787c() __tailcall
