// 函数: sub_44ac50
// 地址: 0x44ac50
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
int32_t var_14 = 0
void* var_8 = arg1
sub_405008(var_8)
int32_t* var_24 = &var_4
int32_t (* var_28)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t var_a = 0
int16_t var_c = 0

while (true)
    if (sub_44abc8(&var_8, data_4ab780) == 0)
        if (sub_44abc8(&var_8, 0x44ad90) == 0)
            if (sub_44abc8(&var_8, data_4ab784) == 0)
                if (sub_44abc8(&var_8, data_4ab788) == 0)
                    break
                
                var_c |= 0x8000
            else
                var_c |= 0x4000
        else
            var_c |= 0x4000
    else
        var_c |= 0x2000

if (var_8 != 0)
    edi.w = 8
    
    do
        ebp_1 = sub_44a9d0(edi.w, &ebp_1[-4])
        ebp_1[-3] = ebp_1[-4]
        int32_t cchCount1 = ebp_1[-1]
        
        if (cchCount1 != 0)
            cchCount1 = *(cchCount1 - 4)
        
        int32_t cchCount2 = ebp_1[-3]
        
        if (cchCount2 != 0)
            cchCount2 = *(cchCount2 - 4)
        
        char* lpString2 = sub_405018(ebp_1[-3])
        
        if (CompareStringA(0x400, 1, sub_405018(ebp_1[-1]), cchCount1, lpString2, cchCount2) == 2)
            edi.w |= ebp_1[-2].w
            *(ebp_1 - 6) = edi.w
            break
        
        edi += 1
    while (edi.w != 0x256)

fsbase->NtTib.ExceptionList = ExceptionList
uint32_t (* var_24_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_44ad7a
sub_404b88(&ebp_1[-4])
sub_404b88(&ebp_1[-1])
return &ebp_1[-1]
