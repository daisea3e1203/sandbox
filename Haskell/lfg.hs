replicate' :: (Num i, Ord i) => i -> a -> [a]
replicate' n x
 | n <= 0 = []
 | otherwise = x:replicate'(n-1) x

take' :: (Num i, Ord i) => i -> [a] -> [a]
take' n __
 | n <= 0 = []
take' _ [] = []
take' n (x:xs) = x : take' (n-1) xs

reverse' :: [a] -> [a]
reverse' [] = []
reverse' (x:xs) = reverse' xs ++ [x]

zip' :: [a] -> [b] -> [(a,b)]
zip' _ [] = []
zip' [] _ = []
zip' (x:xs) (y:ys) = (x,y) : zip' xs ys

elem' :: (Eq a) => a -> [a] -> Bool
elem' a [] = False
elem' a (x:xs)
 | a == x = True
 | otherwise = a `elem'` xs

quicksort :: (Ord a) => [a] -> [a]
quicksort [] = []
quicksort (x:xs) =
 let smallerSorted = quicksort [a | a <- xs, a <= x]
     biggerSorted  = quicksort [a | a <- xs, a >= x]
 in smallerSorted ++ [x] ++ biggerSorted

multThree :: (Num a) => a -> a -> a -> a
multThree x y z = x * y * z

isUpperAlphanum :: Char -> Bool
isUpperAlphanum = (`elem` ['A'..'Z'])

applyTwice :: (a -> a) -> a -> a
applyTwice f x = f (f x)

zipWith' :: (a -> b -> c) -> [a] -> [b] -> [c]
zipWith' _ [] _ = []
zipWith' _ _ [] = []
zipWith' f (x:xs) (y:ys) = f x y : zipWith' f xs ys

zipWithMult' = zipWith' (*) 

flip' :: (a -> b -> c) -> b -> a -> c
flip' f = \x y -> f y x

filter' :: (a -> Bool) -> [a] -> [a]
filter' _ [] = []
filter' p (x:xs)
    | p x = x: filter p xs
    | otherwise = filter p xs

largestDivisible :: (Integral a) => a
largestDivisible = head (filter p [100000, 99999..])
    where p x = x `mod` 3829 == 0

sumOddSquares = sum (takeWhile (<10000) (filter odd (map (^2) [1..])))
sumOddSquares' = sum (takeWhile (<10000) [n^2 | n <- [1..], odd (n)])

chain :: (Integral a) => a -> [a]
chain 1 = [1]
chain n
    | even n = n:chain (n `div` 2)
    | odd n = n:chain (n*3 + 1)

numLongChains :: Int
numLongChains = length (filter isLong (map chain [1..100]))
    where isLong xs = length xs > 15

numLongChains' :: Int
numLongChains' = length (filter (\xs -> length xs > 15) (map chain[1..100]))

sum' :: (Num a) => [a] -> a
sum' = foldl (+) 0

elem'' ::(Eq a) => a -> [a] -> Bool
elem'' y ys = foldl (\acc x -> if x == y then True else acc) False ys

map' :: (a -> b) -> [a] -> [b]
map' f xs = foldr (\x acc -> f x : acc) [] xs

sqrtSums :: Int
sqrtSums = length (takeWhile (<1000) (scanl1 (+) (map sqrt [1..]))) + 1

--sqrtSums' :: Int
--sqrtSums' = length (takeWhile (<1000) (foldl (\acc x -> ((head acc) + x) : acc) [] (map sqrt [1..]))) + 1

negateList :: (Num a) => [a] -> [a]
negateList xs = map (negate . abs) xs
--negateList xs = map (\x -> negate(abs x)) xs

oddSquareSum :: Integer
oddSquareSum = sum . takeWhile (<10000) . filter odd . map (^2) $ [1..]

oddSquareSum' :: Integer
oddSuaresum' =
    let oddSquares = filter odd $ map(^2) [1..]
        belowlimit = takeWhile (<10000) oddSquares
    in sum belowLimit
