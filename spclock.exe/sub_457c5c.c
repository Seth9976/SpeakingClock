// 函数: sub_457c5c
// 地址: 0x457c5c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

BOOL result

if (arg2 != 0)
label_457c81:
    result = arg1
    
    if (*(result + 0x30) != 0)
        result = sub_45fc28(*(arg1 + 0x30))
        
        if (result.b != 0)
            void rect
            sub_4570f0(arg1, &rect)
            uint32_t eax_5
            int32_t __saved_ebp
            
            if (arg3 == 0 && (*(*(arg1 + 0x30) + 0x50) & 0x40) == 0)
                eax_5 = sub_457bd0(&__saved_ebp)
            
            if (arg3 == 0 && (*(*(arg1 + 0x30) + 0x50) & 0x40) == 0 && eax_5.b == 0)
                eax_5.b = 1
            else
                eax_5 = 0
            
            char temp0_1 = eax_5.b
            eax_5.b = neg.b(eax_5.b)
            return InvalidateRect(sub_45f888(*(arg1 + 0x30)), &rect, 
                sbb.d(eax_5, eax_5, temp0_1 != 0))
else
    result = arg1
    
    if ((*(result + 0x1c) & 0x10) != 0)
        result = arg1
        
        if ((*(result + 0x51) & 4) == 0)
            goto label_457c81

return result
