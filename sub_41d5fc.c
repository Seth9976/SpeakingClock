// 函数: sub_41d5fc
// 地址: 0x41d5fc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_14 = ebx
int32_t esi
int32_t var_18 = esi
int32_t edi
int32_t var_1c = edi
void* var_8 = nullptr
char* ebx_1 = arg2
int32_t* var_20 = &var_4
int32_t (* var_24)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_c = 0

if (ebx_1 != 0)
    void* edi_1 = arg1
    
    while (true)
        if (*ebx_1 == 0)
            void* var_c_1 = edi_1
            break
        
        int64_t* var_10_1 = ebx_1
        
        while (true)
            char eax = *ebx_1
            
            if (eax == 0)
                break
            
            if (eax - 0x2d u< 2)
                break
            
            ebx_1 = &ebx_1[1]
        
        sub_404c78(&var_8, var_10_1, ebx_1 - var_10_1)
        void* esi_2 = sub_423854(edi_1, var_8)
        
        if (esi_2 == 0 && sub_408f64(var_8, "Owner") != 0)
            esi_2 = edi_1
        
        if (esi_2 == 0)
            break
        
        if (*ebx_1 == 0x2e)
            ebx_1 = &ebx_1[1]
        
        if (*ebx_1 == 0x2d)
            ebx_1 = &ebx_1[1]
        
        if (*ebx_1 == 0x3e)
            ebx_1 = &ebx_1[1]
        
        edi_1 = esi_2

fsbase->NtTib.ExceptionList = ExceptionList
int32_t (* var_20_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_41d6ac
int32_t* result = &var_8
sub_404b88(result)
return result
