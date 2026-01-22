// 函数: sub_415104
// 地址: 0x415104
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t (* ebp)(void* arg1, void* arg2)
int32_t (* var_4)(void* arg1, void* arg2) = ebp
int32_t* __return_addr_1 = &var_4
int32_t ebx
int32_t var_30 = ebx
int32_t esi
int32_t var_34 = esi
int32_t* esp = &var_34
int16_t* ExceptionList = arg2
char var_d = 1
uint32_t esi_1 = zx.d(*arg1)
uint32_t eax
eax.w = esi_1.w & 0xfff
void arg_4
TEB* fsbase
long double x87_r0
long double x87_r1

if (eax.w u>= 0x10f)
    int16_t eax_33 = *ExceptionList
    
    if (eax_33 == 0)
        arg2.b = 1
        char var_d_3 = sub_414d2c(0, arg2.b)
    else if (eax_33 != 1)
        void var_18
        char eax_37
        int16_t* ebx_5
        eax_37, ebx_5, __return_addr_1 = sub_415ce4(esi_1.w, &var_18)
        
        if (eax_37 != 0)
            __return_addr_1[-1]
            esp = &arg_4
            
            if ((*(*__return_addr_1[-5] + 8))(__return_addr_1 - 0xe) == 0)
                int16_t esi_5 = *__return_addr_1[-1]
                
                if ((esi_5 & 0xfff) u< 0x10f)
                    VariantInit(&__return_addr_1[-0xa])
                    __return_addr = __return_addr_1
                    var_4 = j_sub_40443c
                    ExceptionList = fsbase->NtTib.ExceptionList
                    fsbase->NtTib.ExceptionList = &ExceptionList
                    sub_410da4(&__return_addr_1[-0xa], ebx_5, zx.d(*__return_addr_1[-1]), x87_r0, 
                        x87_r1)
                    
                    if (*__return_addr_1[-1] != __return_addr_1[-0xa].w)
                        __return_addr_1 = sub_40ff24()
                    
                    *(__return_addr_1 - 9) = sub_414f78(&__return_addr_1[-0xa], 
                        __return_addr_1[-1], __return_addr_1[-2], x87_r0, x87_r1)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    __return_addr = &data_41551e
                    return sub_4107b0(&__return_addr_1[-0xa])
                
                char eax_68
                int16_t* ebx_8
                eax_68, ebx_8, __return_addr_1 = sub_415ce4(esi_5, &__return_addr_1[-6])
                
                if (eax_68 != 0)
                    __return_addr = &__return_addr_1[-3]
                    esp = &arg_4
                    
                    if ((*(*__return_addr_1[-6] + 4))() == 0)
                        __return_addr_1 = sub_410014()
                    else
                        if (*ebx_8 != __return_addr_1[-3].w)
                            VariantInit(&__return_addr_1[-0xa])
                            __return_addr = __return_addr_1
                            var_4 = j_sub_40443c
                            ExceptionList = fsbase->NtTib.ExceptionList
                            fsbase->NtTib.ExceptionList = &ExceptionList
                            sub_410da4(&__return_addr_1[-0xa], ebx_8, zx.d(__return_addr_1[-3].w), 
                                x87_r0, x87_r1)
                            
                            if (__return_addr_1[-0xa].w != __return_addr_1[-3].w)
                                __return_addr_1 = sub_40ff24()
                            
                            int32_t eax_76 = __return_addr_1[-2]
                            __return_addr_1[-1]
                            int32_t eax_79 = (*(*__return_addr_1[-6] + 0x34))(eax_76) & 0x7f
                            *(__return_addr_1 - 9) =
                                (&data_4aaa50)[(__return_addr_1[-2] << 1) + eax_79 - 0x1c]
                            fsbase->NtTib.ExceptionList = eax_76
                            var_4 = &data_41551e
                            return sub_4107b0(&__return_addr_1[-0xa])
                        
                        __return_addr = __return_addr_1[-2]
                        __return_addr_1[-1]
                        esp = &arg_4
                        int32_t eax_86 = (*(*__return_addr_1[-6] + 0x34))() & 0x7f
                        *(__return_addr_1 - 9) =
                            (&data_4aaa50)[(__return_addr_1[-2] << 1) + eax_86 - 0x1c]
                else
                    __return_addr_1 = sub_410014()
            else
                if (*__return_addr_1[-1] != *(__return_addr_1 - 0xe))
                    VariantInit(&__return_addr_1[-0xa])
                    __return_addr = __return_addr_1
                    var_4 = j_sub_40443c
                    ExceptionList = fsbase->NtTib.ExceptionList
                    fsbase->NtTib.ExceptionList = &ExceptionList
                    sub_410da4(&__return_addr_1[-0xa], __return_addr_1[-1], 
                        zx.d(*(__return_addr_1 - 0xe)), x87_r0, x87_r1)
                    
                    if (__return_addr_1[-0xa].w != *(__return_addr_1 - 0xe))
                        __return_addr_1 = sub_40ff24()
                    
                    int32_t eax_46 = __return_addr_1[-2]
                    int32_t eax_49 = (*(*__return_addr_1[-5] + 0x34))(eax_46) & 0x7f
                    *(__return_addr_1 - 9) =
                        (&data_4aaa50)[(__return_addr_1[-2] << 1) + eax_49 - 0x1c]
                    fsbase->NtTib.ExceptionList = eax_46
                    var_4 = &data_41551e
                    return sub_4107b0(&__return_addr_1[-0xa])
                
                __return_addr = __return_addr_1[-2]
                __return_addr_1[-1]
                esp = &arg_4
                int32_t eax_56 = (*(*__return_addr_1[-5] + 0x34))() & 0x7f
                *(__return_addr_1 - 9) = (&data_4aaa50)[(__return_addr_1[-2] << 1) + eax_56 - 0x1c]
        else
            __return_addr_1 = sub_410014()
    else
        char var_d_4 = sub_414d40(0, 2, arg3)
else if (esi_1.w == 0)
    eax.b = 1
    char var_d_1 = sub_414d2c(eax.b, 0)
else if (esi_1.w != 1)
    void var_1c
    char eax_5
    int16_t* ebx_2
    eax_5, ebx_2, __return_addr_1 = sub_415ce4(*ExceptionList, &var_1c)
    
    if (eax_5 != 0)
        if ((*(*__return_addr_1[-6] + 4))(&__return_addr_1[-3]) == 0)
            VariantInit(&__return_addr_1[-0xa])
            __return_addr = __return_addr_1
            var_4 = j_sub_40443c
            ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            sub_410da4(&__return_addr_1[-0xa], __return_addr_1[-1], zx.d(*ebx_2), x87_r0, x87_r1)
            
            if ((__return_addr_1[-0xa].w & 0xfff) != *ebx_2)
                __return_addr_1 = sub_40ff24()
            
            *(__return_addr_1 - 9) =
                sub_414f78(ebx_2, &__return_addr_1[-0xa], __return_addr_1[-2], x87_r0, x87_r1)
            fsbase->NtTib.ExceptionList = ExceptionList
            __return_addr = &data_41551e
            return sub_4107b0(&__return_addr_1[-0xa])
        
        if (*ebx_2 != __return_addr_1[-3].w)
            VariantInit(&__return_addr_1[-0xa])
            __return_addr = __return_addr_1
            var_4 = j_sub_40443c
            ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            sub_410da4(&__return_addr_1[-0xa], ebx_2, zx.d(__return_addr_1[-3].w), x87_r0, x87_r1)
            
            if ((__return_addr_1[-0xa].w & 0xfff) != __return_addr_1[-3].w)
                __return_addr_1 = sub_40ff24()
            
            int32_t eax_13 = __return_addr_1[-2]
            __return_addr_1[-1]
            int32_t eax_16 = (*(*__return_addr_1[-6] + 0x34))(eax_13) & 0x7f
            *(__return_addr_1 - 9) = (&data_4aaa50)[(__return_addr_1[-2] << 1) + eax_16 - 0x1c]
            fsbase->NtTib.ExceptionList = eax_13
            var_4 = &data_41551e
            return sub_4107b0(&__return_addr_1[-0xa])
        
        __return_addr = __return_addr_1[-2]
        __return_addr_1[-1]
        esp = &arg_4
        int32_t eax_23 = (*(*__return_addr_1[-6] + 0x34))() & 0x7f
        *(__return_addr_1 - 9) = (&data_4aaa50)[(__return_addr_1[-2] << 1) + eax_23 - 0x1c]
    else
        __return_addr_1 = sub_410014()
else
    eax.b = 2
    char var_d_2 = sub_414d40(eax, 0, arg3)
*esp
esp[1]
*__return_addr_1
return zx.d(*(__return_addr_1 - 9))
