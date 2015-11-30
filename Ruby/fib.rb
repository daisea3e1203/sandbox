def fib (n)
  if ( n <= 1 )
    return n
  end
  return fib(n-1) + fib(n-2)
end

$memo = Array.new(121);

def fib1 (n)
  if (n <= 1)
    return n
  end
  if ($memo[n] != nil)
    return $memo[n]
  end
  return $memo[n] = fib(n-1) + fib(n-2)
end
