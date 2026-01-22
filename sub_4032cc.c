// 函数: sub_4032cc
// 地址: 0x4032cc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t esi = arg1
sub_404b88(arg2)
void** result

if (esi != 0)
    void** result_1 = GetCommandLineA()
    
    while (true)
        result = sub_4031d0(result_1, arg2)
        result_1 = result
        
        if (esi == 0)
            break
        
        if (*arg2 == 0)
            break
        
        esi -= 1
else
    result = arg2
    void filename
    sub_404c78(result, &filename, GetModuleFileNameA(nullptr, &filename, 0x105))

return result
