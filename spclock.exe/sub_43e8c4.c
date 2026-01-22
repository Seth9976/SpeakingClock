// 函数: sub_43e8c4
// 地址: 0x43e8c4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ecx
int32_t var_8 = ecx
int32_t* result = arg1

if (arg2 != *(result + 0x259))
    *(arg1 + 0x259) = arg2
    sub_45fb58(arg1, arg2)
    result = sub_45fc28(arg1)
    
    if (result.b != 0)
        WPARAM wParam = (*(*arg1 + 0xd8))(0) & 0x7f
        result = SendMessageA(sub_45f888(arg1), 0xf1, wParam)
    
    if (arg2 != 0)
        int32_t __saved_ebp
        sub_43e808(&__saved_ebp)
        sub_4573d8()
        result = arg1
        
        if (result[0x94].b == 0)
            int32_t esi
            esi.w = 0xffeb
            return sub_403e64(arg1, esi)

return result
