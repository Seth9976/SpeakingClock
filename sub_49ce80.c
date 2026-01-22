// 函数: sub_49ce80
// 地址: 0x49ce80
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
int32_t* var_18 = &var_4
int32_t (* var_1c)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (sub_49ad94(arg1) == 0)
    if (arg2 == arg1[0xbd])
        arg1[0x1a]
        sub_42c630(arg1[0x94])
        
        if (*(arg1[0xbd] + 0x30) != 0)
            char eax_5
            int32_t ecx_1
            eax_5, ecx_1 = sub_49011c(arg1[0x94])
            
            if (eax_5 == 0)
                void* edi_1 = arg1[0x1a]
                
                if (arg2 != edi_1)
                    sub_404dec(ecx_1, data_4ac484)
                    sub_42b5a0(edi_1, var_8)
                else
                    sub_4874e0(arg1[0xbd], 0)
        
        (*(*arg1 + 0x190))()
        esp = &var_8
    else if (0 == (arg1[7].w & 0xb))
        int32_t edx_4
        edx_4.b = 1
        (*(*arg1 + 0x19c))()
        esp = &var_8
        
        if (arg2 != arg1[0xb9])
            (*(*arg1 + 0x80))()
            int32_t eax_15
            
            if (arg2 != arg1[0xbe])
                eax_15 = (*(*arg1 + 0x13c))()
            
            if (arg2 == arg1[0xbe] || arg2 == eax_15)
                (*(*arg1 + 0x190))()
        else
            esp = &var_8
            sub_45b884(sub_458ac8(arg1, 0), 0xb00d)

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_49cfa4
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_404b88(result)
return result
