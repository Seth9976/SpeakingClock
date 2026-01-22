// 函数: sub_41af3c
// 地址: 0x41af3c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

sub_404bdc(arg2, arg1[5])
int32_t esi
esi.w = 0xffff
int32_t* eax_2 = sub_403e64(arg1, esi)
int32_t* result = arg2

if (*result == 0 && eax_2 != 0)
    result = sub_403ea8(*eax_2)
    
    if (result != 0)
        result = sub_416064(sub_403ea8(*eax_2))
        
        if (result != 0 && result[2].w != 0)
            int32_t eax_11 = sub_402ea8(sx.d(result[2].w) * 4)
            int32_t __saved_ebp
            int32_t* var_24 = &__saved_ebp
            int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
            TEB* fsbase
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            sub_416268(sub_403ea8(*eax_2), eax_11)
            int32_t edi_1 = sx.d(result[2].w) - 1
            
            if (edi_1 s>= 0)
                int32_t i_1 = edi_1 + 1
                int32_t ebx_2 = 0
                int32_t i
                
                do
                    int32_t* esi_1 = *(eax_11 + (ebx_2 << 2))
                    
                    if (***esi_1 == 7)
                        int32_t eax_20
                        int32_t ecx_1
                        eax_20, ecx_1 = sub_4162ec(eax_2, *(eax_11 + (ebx_2 << 2)))
                        
                        if (eax_20 == arg1)
                            sub_404dec(ecx_1, esi_1 + 0x1a)
                    
                    ebx_2 += 1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            int32_t (* var_24_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_41b041
            return sub_402ec4(eax_11)

return result
