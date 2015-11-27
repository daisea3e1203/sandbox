import Control.Monad

main = do
    rs <- sequence [getLine, getLine, getLine]
    print rs
    

    --c <- getChar
    --when (c /= ' ') $ do
    --    putChar c
    --    main
    



    --c <- getChar
    --if c /= ' '
    --then do 
    --    putChar c
    --    main
    --else return ()


    --putChar 't'
    --putChar 'e'
    --putChar 'h'
    
    

--putStr "Hey "
--putStr "I'm "
--putStrLn "Andy!"



--    line <- getLine
--    if null line
--    then return ()
--    else do
--        putStrLn $ reverseWords line
--        main
--
--reverseWords :: String -> String
--reverseWords = unwords . map reverse . words


   -- putStrLn "Hello, what's your name?"
   -- name <- getLine
   -- putStrLn ("Hey " ++ name ++ ", you rock!")
