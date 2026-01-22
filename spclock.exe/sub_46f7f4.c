// 函数: sub_46f7f4
// 地址: 0x46f7f4
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
char ebx = arg2.b
uint32_t result_1 = arg1
BOOL result = result_1

if (ebx != *(result + 0x277))
    int32_t ExceptionList
    
    if ((ebx != 0 || *(result_1 + 0x277) != 3) && (ebx != 3 || *(result_1 + 0x277) != 0))
        if (ebx == 1 && *(result_1 + 0x278) == 0)
            arg2.b = 1
            sub_46fcfc(result_1, arg2.b)
        
        uint32_t eax_11
        eax_11.b = (*(result_1 + 0x1c) & 0x10) != 0
        eax_11.b ^= 1
        int32_t var_c
        var_c:3.b = eax_11.b
        
        if (var_c:3.b != 0)
            arg2.b = 1
            sub_460db8(result_1, arg2)
        
        int32_t* var_14_1 = &__saved_ebp
        int32_t (* var_18_1)(void* arg1, void* arg2) = j_sub_40443c
        TEB* fsbase
        ExceptionList = fsbase->NtTib.ExceptionList
        int32_t* esp = &ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        
        if (var_c:3.b != 0)
            (*(*result_1 + 0xb0))()
            esp = &result_1
        
        char eax_15 = *(result_1 + 0x277)
        *(result_1 + 0x277) = ebx
        
        if ((ebx == 2 || eax_15 == 2) && *(result_1 + 0x1d9) == 0)
            int32_t eax_18 = sub_46fe34(result_1)
            sub_457978(result_1, eax_18)
        
        uint32_t edx_1
        
        if (var_c:3.b != 0)
            edx_1, ebp = sub_45c37c(result_1)
        
        if (ebx == 1)
            edx_1.b = 1
            sub_46e590(ebp[-1], edx_1.b)
        
        esp[2]
        fsbase->NtTib.ExceptionList = *esp
        esp[2] = 0x46f963
        
        if (*(ebp - 5) == 0)
            return nullptr
        
        return sub_460db8(ebp[-1], 0)
    
    *(result_1 + 0x277) = ebx
    result = result_1
    
    if ((*(result + 0x1c) & 0x10) == 0)
        result = sub_45fc28(result_1)
        
        if (result.b != 0)
            enum SET_WINDOW_POS_FLAGS uFlags = 0x213
            int32_t cy = 0
            ExceptionList = 0
            uint32_t eax_4
            eax_4.b = *(result_1 + 0x277) == 3
            return SetWindowPos(sub_45f888(result_1), *(((eax_4 & 0x7f) << 2) + &data_4aba90), 0, 
                0, ExceptionList, cy, uFlags)

return result
