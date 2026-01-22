// 函数: sub_41af33
// 地址: 0x41af33
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg3 += 1
*arg1 += arg1.b
*arg5 += arg3:1.b
*arg1 += arg1.b
*(arg4 - 0x75) += arg2.b
int32_t eflags
arg1.b = __in_al_dx(arg2.w, eflags)
int32_t ebx
int32_t var_14 = ebx
char* var_18 = arg5
int32_t edi
int32_t var_1c = edi
*(arg4 - 8) = arg2
*(arg4 - 4) = arg1
sub_404bdc(*(arg4 - 8), *(*(arg4 - 4) + 0x14))
arg5.w = 0xffff
*(arg4 - 0x10) = sub_403e64(*(arg4 - 4), arg5)
int32_t* result = *(arg4 - 8)

if (*result == 0 && *(arg4 - 0x10) != 0)
    result = sub_403ea8(**(arg4 - 0x10))
    
    if (result != 0)
        result = sub_416064(sub_403ea8(**(arg4 - 0x10)))
        
        if (result != 0 && result[2].w != 0)
            *(arg4 - 0xc) = sub_402ea8(sx.d(result[2].w) * 4)
            __return_addr = arg4
            int32_t (* var_4)(void* arg1, void* arg2) = j_sub_40443c
            TEB* fsbase
            struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
            fsbase->NtTib.ExceptionList = &ExceptionList
            sub_416268(sub_403ea8(**(arg4 - 0x10)), *(arg4 - 0xc))
            int32_t edi_2 = sx.d(result[2].w) - 1
            
            if (edi_2 s>= 0)
                int32_t i_1 = edi_2 + 1
                int32_t ebx_2 = 0
                int32_t i
                
                do
                    int32_t* esi = *(*(arg4 - 0xc) + (ebx_2 << 2))
                    
                    if (***esi == 7)
                        int32_t eax_20
                        int32_t ecx
                        eax_20, ecx = sub_4162ec(*(arg4 - 0x10), *(*(arg4 - 0xc) + (ebx_2 << 2)))
                        
                        if (eax_20 == *(arg4 - 4))
                            *(arg4 - 4)
                            sub_404dec(ecx, esi + 0x1a)
                    
                    ebx_2 += 1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            __return_addr = sub_41b041
            return sub_402ec4(*(arg4 - 0xc))

*arg4
return result
