// 函数: sub_431954
// 地址: 0x431954
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t esi
int32_t var_8 = esi
int32_t edi
int32_t var_c = edi
sub_430e88(arg1)
int32_t result
void** esp
void* var_74
int16_t var_70

if (arg3 != 0)
    sub_41caa0(arg2, &var_70, 0xe)
    
    if (var_70 != 0x4d42)
        sub_42ca20()
    
    var_74 = &var_70
    esp = &var_74
    result = sub_4313e4(arg1, arg2, arg3 - 0xe)
else
    void var_62
    sub_403578(&var_62, 0x54, 0)
    var_74 = &var_62
    result = sub_4312bc(arg1, 0, 0, nullptr, 0, var_74)
    esp = &var_70
esp[0x19]
esp[0x1a]
esp[0x1b]
return result
