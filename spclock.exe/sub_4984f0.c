// 函数: sub_4984f0
// 地址: 0x4984f0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* var_8 = nullptr
int32_t* var_c = nullptr
int32_t ebx
int32_t var_10 = ebx
int32_t esi
int32_t var_14 = esi
int32_t edi
int32_t var_18 = edi
int32_t* var_1c = &var_4
int32_t (* var_20)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
sub_406550(&var_8)
char eax_3
int32_t* edi_2
eax_3, edi_2 = sub_498100(arg2, 0x4985c0, &var_8)
char eax_6

if (eax_3 == 0)
    sub_406550(&var_8)
    eax_6 = sub_498100(edi_2, 0x4985c0, &var_8)

if (eax_3 != 0 || eax_6 != 0)
    esp = &var_8
    int32_t esi_2 = (*(*var_8 + 0x2c))() - 1
    
    if (esi_2 s>= 0)
        int32_t i_1 = esi_2 + 1
        int32_t ebx_2 = 0
        int32_t i
        
        do
            var_c = (*(*var_8 + 0x28))()
            sub_406550(&var_c)
            esp = &var_8
            char eax_13
            int32_t edi_3
            eax_13, edi_3 = sub_498100(var_c, 0x4985c0, &var_c)
            
            if (eax_13 != 0 && edi_3 != (*(*var_8 + 0x28))())
                (*(*var_c + 0x24))()
            
            ebx_2 += 1
            i = i_1
            i_1 -= 1
        while (i != 1)

fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_4985b8
int32_t** result = &var_c
sub_405724(result, 0x49819c, 2)
return result
