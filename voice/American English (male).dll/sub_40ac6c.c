// 函数: sub_40ac6c
// 地址: 0x40ac6c
// 来自: E:\torrent\Tools\Speaking Clock\voice\American English (male).dll

data_414740 = 0x409
data_414744 = 9
data_414748 = 1
uint32_t eax = GetThreadLocale()

if (eax != 0)
    data_414740 = eax

if (eax.w != 0)
    data_414744 = zx.d(eax.w) & 0x3ff
    data_414748 = zx.d(eax.w) u>> 0xa

__builtin_memset(&data_413114, 0x40adc0, 0x20)
int32_t* result
int32_t __saved_ebp
int32_t ebx

if (data_4130cc != 2)
    int32_t eax_4
    eax_4.b = GetSystemMetrics(SM_MIDEASTENABLED) != 0
    data_41474d = eax_4.b
    result = GetSystemMetrics(SM_DBCSENABLED)
    ebx.b = result != 0
    data_41474c = ebx.b
    
    if (ebx.b != 0)
        result = sub_40abf4(&__saved_ebp)
else
    result = sub_40ac54()
    char temp0_1 = result.b
    
    if (temp0_1 == 0)
        sub_40abf4(&__saved_ebp)
        result = &data_413114
        sub_402a18(&data_413114, 0x40adc0, 0x20)
        ebx.b = temp0_1 != 0
        data_41474c = ebx.b
        
        if (ebx.b == 0)
            int32_t i = 0x80
            uint8_t srcStr[0x94]
            uint8_t (* edx_3)[0x94] = &srcStr
            
            do
                *edx_3 = i.b
                i += 1
                edx_3 = &(*edx_3)[1]
            while (i != 0x100)
            
            uint16_t charType[0x81]
            GetStringTypeExA(data_414740, 2, &srcStr, 0x80, &charType)
            result = 0x80
            uint16_t (* edx_4)[0x81] = &charType
            int32_t* i_1
            
            do
                bool ecx_2 = *edx_4 == 2
                data_41474d = ecx_2
                
                if (ecx_2 != 0)
                    break
                
                edx_4 = &(*edx_4)[1]
                i_1 = result
                result -= 1
            while (i_1 != 1)
        else
            data_41474d = 0
    else
        data_41474d = 0
        data_41474c = 0
return result
