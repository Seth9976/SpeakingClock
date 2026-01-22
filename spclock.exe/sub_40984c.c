// 函数: sub_40984c
// 地址: 0x40984c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

uint32_t result = GetFileAttributesA(sub_405018(arg1))

if (result != 0xffffffff)
    result.b = (result.b & 0x10) == 0
    return result

enum WIN32_ERROR eax_2 = GetLastError()

if (eax_2 != ERROR_FILE_NOT_FOUND && eax_2 != ERROR_PATH_NOT_FOUND && eax_2 != ERROR_INVALID_NAME
        && sub_40980c(arg1) != 0)
    return 1

return 0
