import Control.Monad
import Data.Char
import System.IO

--main = interact shortLinesOnly
--
--shortLinesOnly :: String -> String
--shortLinesOnly input =
--    let allLines = lines input
--        shortLines = filter(\line -> length line < 10) allLines
--        result = unlines shortLines
--    in result

--main = interact $ unlines . filter ((<10) . length) . lines
--main = interact respondPalindromes
--
--respondPalindromes = unlines . map (\xs -> if isPalindrome xs then "palindrome" else "not a palindrome") . lines
--    where isPalindrome xs = xs == reverse xs

--main = do
--    handle <- openFile "girlfriend.txt" ReadMode
--    contents <- hGetContents handle
--    putStr contents
--    hClose handle

withFile' :: FilePath -> IOMode -> (Handle -> IO a) -> IO a
withFile' path mode f = do
    handle <- openFile path mode
    result <- f handle
    hClose handle
    return result

main = withFile' "girlfriend.txt" ReadMode (\handle -> do
    contents <- hGetContents handle
    putStr contents)
