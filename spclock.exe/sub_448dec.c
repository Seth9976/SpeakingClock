// 函数: sub_448dec
// 地址: 0x448dec
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_48 = ebx
int32_t esi
int32_t var_4c = esi
int32_t edi
int32_t var_50 = edi
int32_t* var_c = nullptr
struct _EXCEPTION_REGISTRATION_RECORD* var_8 = nullptr
int32_t* var_54 = &var_4
int32_t (* var_58)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esp = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 u< 1)
    int32_t eax_8 = (*data_4ac1e0)(*(arg4 + 8), 2)
    int32_t var_44 = 0x28
    var_c = &var_44
    esp = &var_8
    
    if ((*data_4ac110)(eax_8, var_c) != 0)
        int32_t X
        var_c = &X
        GetWindowRect(arg1, var_c)
        int32_t var_40
        
        if (*(arg4 + 0xc) s< 0)
            int32_t var_38
            int32_t var_14
            int32_t eax_15 = var_38 - var_40 - (var_14 - X)
            int32_t eax_16 = eax_15 s>> 1
            bool c_1 = unimplemented  {sar eax, 0x1}
            
            if (eax_15 s>> 1 s< 0)
                eax_16 = adc.d(eax_16, 0, c_1)
            
            *(arg4 + 0xc) = eax_16
        
        int32_t var_3c
        
        if (*(arg4 + 0x10) s< 0)
            int32_t var_34
            int32_t var_18
            void* eax_19 = var_34 - var_3c - (arg1 - var_18)
            int32_t eax_20 = eax_19 s>> 1
            bool c_2 = unimplemented  {sar eax, 0x1}
            
            if (eax_19 s>> 1 s< 0)
                eax_20 = adc.d(eax_20, 0, c_2)
            
            *(arg4 + 0x10) = eax_20
        
        *(arg4 + 0xc) += var_40
        *(arg4 + 0x10) += var_3c
        var_c = 0x15
        int32_t cy = 0
        int32_t cx = 0
        int32_t Y = *(arg4 + 0x10)
        X = *(arg4 + 0xc)
        SetWindowPos(arg1, nullptr, X, Y, cx, cy, var_c)
        esp = &var_8
else if (arg2 == 2)
    if (arg3 == 0xffffffff)
        sub_448d3c(&var_4)
        esp = &ExceptionList
else if (arg2 == 9)
    sub_448d3c(&var_4)
    esp = &ExceptionList

esp[2]
fsbase->NtTib.ExceptionList = *esp
esp[2] = sub_448f08
sub_404b88(&var_c)
struct _EXCEPTION_REGISTRATION_RECORD** result = &var_8
sub_406550(result)
return result
