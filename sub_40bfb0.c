// 函数: sub_40bfb0
// 地址: 0x40bfb0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t ebx
int32_t var_30 = ebx
int32_t esi
int32_t var_34 = esi
int32_t edi
int32_t var_38 = edi
void* var_2c = nullptr
void* var_28 = nullptr
void* var_24 = nullptr
int32_t var_c = 0
int32_t* var_3c = &var_4
int32_t (* var_40)(void* arg1, void* arg2) = j_sub_40443c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int16_t edi_1 = 0
int16_t var_1a = 0
int16_t var_1c = 0
char var_20 = 0
char var_11 = 0
char eax_1 = sub_40be6c(data_4af818)
int32_t var_8 = 0

if (*data_4af818 != 0x67)
    if (sub_40dc14(0x40c2ec, data_4af818) s> 0)
        var_8 = data_4af8f8
else
    sub_40beb8(arg1, arg2)
    sub_405080(*arg2 - 1, 1, arg1, &var_24)
    sub_40905c(var_24, &var_c)
    var_8 = sub_40bf00(var_c)

void var_1e
char var_1d
int16_t var_16
int16_t var_14

if (sub_40bcc4(&var_14, arg2, arg1, &var_1d) != 0 && sub_40be30(arg1, arg2, zx.d(data_4af815)) != 0
        && sub_40bcc4(&var_16, arg2, arg1, &var_1e) != 0)
    if (sub_40be30(arg1, arg2, zx.d(data_4af815)) == 0)
        edi_1 = sub_40b094()
        
        if (eax_1 != 1)
            var_1a = var_14
            var_1c = var_16
        else
            var_1c = var_14
            var_1a = var_16
        
    label_40c1ca:
        sub_40be30(arg1, arg2, zx.d(data_4af815))
        sub_40bca0(arg1, arg2)
        
        if (data_4af8d8 != 0 && sub_405164(0x40c2f8, data_4af818) != 0)
            if (*data_4af82c - 0x30 u>= 0xa)
                while (true)
                    if (sub_404e48(arg1) s>= *arg2 && *(arg1 + *arg2 - 1) != 0x20)
                        *arg2 += 1
                        continue
                    
                    sub_40bca0(arg1, arg2)
                    
                    if (sub_404e48(arg1) s< *arg2)
                        break
                    
                    sub_405080(sub_404e48(data_4af824), *arg2, arg1, &var_28)
                    
                    if (sub_408ff8(data_4af824, var_28) == 0)
                        break
                    
                    sub_405080(sub_404e48(data_4af828), *arg2, arg1, &var_2c)
                    
                    if (sub_408ff8(data_4af828, var_2c) == 0)
                        break
            else
                sub_40beb8(arg1, arg2)
        
        char var_11_1 = sub_40adb4(var_1c, var_1a, edi_1, arg3)
    else
        char var_1f
        int16_t var_18
        char eax_19
        void* edx_8
        eax_19, edx_8 = sub_40bcc4(&var_18, arg2, arg1, &var_1f)
        
        if (eax_19 != 0)
            if (eax_1 u< 1)
                edi_1 = var_18
                var_20 = var_1f
                var_1a = var_14
                var_1c = var_16
            else if (eax_1 == 1)
                edi_1 = var_18
                var_20 = var_1f
                var_1a = var_16
                var_1c = var_14
            else if (eax_1 == 2)
                edi_1 = var_14
                var_20 = var_1d
                var_1a = var_16
                var_1c = var_18
            
            if (var_8 s> 0)
                int32_t* var_48_5 = &var_4
                edi_1 = sub_40bf54(zx.d(edi_1), edx_8)
            else if (var_20 u<= 2)
                uint32_t ecx_9 = zx.d(sub_40b094()) - zx.d(data_4aa7cc)
                edi_1 += (divs.dp.d(sx.q(ecx_9), 0x64)).w * 0x64
                
                if (data_4aa7cc u> 0 && ecx_9 s> zx.d(edi_1))
                    edi_1 += 0x64
            
            goto label_40c1ca

fsbase->NtTib.ExceptionList = ExceptionList
uint32_t (* var_3c_1)(int32_t* arg1 @ ebp, int32_t arg2, int32_t arg3) = sub_40c2d9
sub_404bac(&var_2c, 3)
int32_t* result = &var_c
sub_404b88(result)
return result
